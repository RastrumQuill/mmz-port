// sub_080ACFE0 at 0x080ACFE0 (thumb)

undefined4 sub_080ACFE0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 local_20 [4];
  
  local_20[0] = 0x9c07;
  local_20[1] = 0x9c0b;
  local_20[2] = 0x9c0f;
  local_20[3] = 0x9c13;
  iVar6 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = *(int *)(param_1 + 0xb8);
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 0xb4) = 1;
      *(int *)(param_1 + 0xb8) = 0;
      pcVar4 = (char *)(iVar6 + 0xbc);
      cVar2 = *pcVar4;
      if (cVar2 != '\0') {
        *pcVar4 = cVar2 + -1;
      }
    }
    sub_0801D3D0(param_1,5);
    pbVar5 = (byte *)(iVar6 + 0xb4);
    *pbVar5 = *pbVar5 & ~(byte)(1 << (uint)bVar1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801CF00(param_1,*(undefined2 *)(local_20 + bVar1));
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    sub_08002B10(0x2a);
    sub_080D0894(1,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

