// sub_080296B0 at 0x080296B0 (thumb)

undefined4 sub_080296B0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (uint)*(byte *)(param_1 + 9) * 4;
  sub_080033DC(param_1 + 0x6c,*(undefined4 *)(&DAT_085a0000 + iVar1));
  sub_08002030(param_1 + 0x2c,*(undefined4 *)(&DAT_08552000 + iVar1),param_1 + 0x4c);
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 10) >> 4 & 1;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 10) >> 5 & 1;
  *(undefined *)(param_1 + 0x1f) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x48;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
  return in_lr;
}

