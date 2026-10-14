// sub_080940C8 at 0x080940C8 (thumb)

undefined4 sub_080940C8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0x10) == '\x02') {
    uVar3 = *(uint *)(&DAT_0885d114 + (uint)bVar1 * 4);
    (&DAT_0202e8b4)[(int)uVar3 >> 3] = (byte)(1 << (uVar3 & 7)) | (&DAT_0202e8b4)[(int)uVar3 >> 3];
    uVar3 = *(uint *)(&DAT_0885d114 + (uint)bVar1 * 4);
    (&DAT_02035880)[(int)uVar3 >> 3] = (byte)(1 << (uVar3 & 7)) | (&DAT_02035880)[(int)uVar3 >> 3];
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  iVar2 = sub_08094568(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar2 == 0) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885d048 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

