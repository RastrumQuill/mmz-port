// sub_080AFB64 at 0x080AFB64 (thumb)

undefined4 sub_080AFB64(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0x10);
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined *)(param_1 + 0x12) = 0xff;
  sub_080AFB94();
  return in_lr;
}

