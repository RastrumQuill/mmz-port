// sub_080B57D4 at 0x080B57D4 (thumb)

undefined4 sub_080B57D4(int param_1)

{
  char cVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined *local_24;
  
  local_28 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x3f);
    uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
    local_30 = *(undefined4 *)(param_1 + 0x54);
    local_2c = *(undefined4 *)(param_1 + 0x58);
    local_24 = (undefined *)(param_1 + 0x94);
    iVar5 = 0;
    iVar4 = 2;
    do {
      sub_080D4898(&local_30,&DAT_08860518 + iVar5,0,uVar2 | uVar2 << 4);
      iVar5 = iVar5 + 0x1c;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *local_24 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    psVar3 = (short *)(local_28 + 0xcc);
    if (*psVar3 != 0) {
      *psVar3 = *psVar3 + -1;
    }
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

