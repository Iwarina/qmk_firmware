#include QMK_KEYBOARD_H

// -----------------------------------------------------
// 1. コンボの設定 (ここに追加したい機能を書きます)
// -----------------------------------------------------

// コンボの名前を定義
enum combo_events {
  COMBO_ESC,
  COMBO_ENTER,
  COMBO_BSPC,
};

// どのキーを同時押しするか定義 (KC_Q とか KC_W はキーの名前です)
const uint16_t PROGMEM combo_esc_seq[] = {KC_Q, KC_W, COMBO_END};   // QとW同時押し
const uint16_t PROGMEM combo_ent_seq[] = {KC_J, KC_K, COMBO_END};   // JとK同時押し
const uint16_t PROGMEM combo_bsp_seq[] = {KC_O, KC_P, COMBO_END};   // OとP同時押し

// 定義したコンボを登録
combo_t key_combos[] = {
  [COMBO_ESC] = COMBO(combo_esc_seq, KC_ESC),     // Q+W で ESC
  [COMBO_ENTER] = COMBO(combo_ent_seq, KC_ENT),   // J+K で Enter
  [COMBO_BSPC] = COMBO(combo_bsp_seq, KC_BSPC),   // O+P で Backspace
};

// -----------------------------------------------------
// 2. キーマップの定義 (ここが普段のキー配置です)
// -----------------------------------------------------

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // 0番目のレイヤー (Base Layer)
    [0] = LAYOUT(
        // ★ここに JSONの "layout" の中身を整形して貼る
        // 例: 左手
        LT(7,KC_Q), KC_W, KC_E, KC_R, KC_T,
        KC_A, KC_S, KC_D, KC_F, KC_G,
        KC_Z, KC_X, KC_C, KC_V, KC_B, 
        KC_NO, KC_NO, KC_LALT, KC_SPC,
        
        // 例: 右手
        KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_H, KC_J, KC_K, KC_L, KC_SCLN,
        KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
        KC_ENT, KC_BSPC, KC_NO, KC_NO
    ),

    // 1番目のレイヤー
    [1] = LAYOUT(
        // ... (必要なレイヤー分だけ記述)
        // 使わないキーは KC_TRNS (透過) や KC_NO (無効) を使います
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    
    // ... レイヤー7まであるようなので、定義しないとエラーになります
    // めんどくさい場合は、[2] ... [7] まで全て KC_TRNS だけ埋めたものを書いておけばOKです。
    [2] = LAYOUT(
        // ... (必要なレイヤー分だけ記述)
        // 使わないキーは KC_TRNS (透過) や KC_NO (無効) を使います
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [3] = LAYOUT(
        // ... (必要なレイヤー分だけ記述)
        // 使わないキーは KC_TRNS (透過) や KC_NO (無効) を使います
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [4] = LAYOUT(
        // ... (必要なレイヤー分だけ記述)
        // 使わないキーは KC_TRNS (透過) や KC_NO (無効) を使います
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [5] = LAYOUT(
        // ... (必要なレイヤー分だけ記述)
        // 使わないキーは KC_TRNS (透過) や KC_NO (無効) を使います
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [6] = LAYOUT(
        // ... (必要なレイヤー分だけ記述)
        // 使わないキーは KC_TRNS (透過) や KC_NO (無効) を使います
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [7] = LAYOUT(
        // ... (必要なレイヤー分だけ記述)
        // 使わないキーは KC_TRNS (透過) や KC_NO (無効) を使います
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
};
