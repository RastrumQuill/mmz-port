// sub_0809AE54 at 0x0809AE54 (thumb)

undefined4 sub_0809AE54(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  int local_18 [2];
  
  local_18[0] = 0x600;
  local_18[1] = 0x3600;
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xb7) = 0;
    sub_08005784(param_1 + 0x74,&DAT_0885db58);
    sub_0801CF00(param_1,0x6400);
    *(uint *)(param_1 + 0x5c) = ((bVar2 >> 4 & 1) * 2 + -1) * 0x100;
    iVar4 = local_18[bVar1];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(char *)(param_1 + 0x12) = (char)((uint)iVar4 >> 8);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

