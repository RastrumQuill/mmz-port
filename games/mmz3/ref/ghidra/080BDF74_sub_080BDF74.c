// sub_080BDF74 at 0x080BDF74 (thumb)

undefined4 sub_080BDF74(int param_1)

{
  undefined4 in_lr;
  
  sub_080048A0(param_1 + 0x34,0x80be09d);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 1;
  sub_0800393C(&DAT_085d7da8,(DAT_0202fa88 - 0x30) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7db4,(DAT_0202f888 - 0xe) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x9400;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0x12) = 0;
  sub_080BE00C(param_1);
  return in_lr;
}

