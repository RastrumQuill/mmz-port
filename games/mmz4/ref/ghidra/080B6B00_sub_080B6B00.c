// sub_080B6B00 at 0x080B6B00 (thumb)

undefined4 sub_080B6B00(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08860904);
    sub_0801CF00(param_1,0xb501);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    local_28 = *(undefined4 *)(param_1 + 0x54);
    uVar1 = 0;
    iVar2 = -0x1800;
    do {
      local_24 = *(int *)(param_1 + 0x58) + iVar2;
      sub_080B6770(param_1,&local_28,uVar1 & 0xff);
      iVar2 = iVar2 + 0x1800;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 3);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

