// sub_0807903C at 0x0807903C (thumb)

undefined4 sub_0807903C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar5 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  sub_080128D4(param_1);
  iVar4 = *(int *)(iVar5 + 0x54) + ((*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1) * -0x400;
  iVar3 = sub_080EF150(*(int *)(param_1 + 0xb4) - iVar4,7);
  *(uint *)(param_1 + 0x54) = (uint)*(byte *)(param_1 + 0x11) * iVar3 + iVar4;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0xbd) <= *(byte *)(iVar5 + 0xbd)) {
      return in_lr;
    }
    sub_08006E08(param_1 + 0x74,&DAT_0833fe78);
    bVar1 = *(byte *)(param_1 + 0x11);
    *(byte *)(param_1 + 0x12) = bVar1 * '\x02' + (char)((int)((uint)bVar1 * (uint)bVar1) >> 2);
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 != 2) {
      return in_lr;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x04';
    iVar5 = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] * 7;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    iVar5 = (iVar5 >> 2) + 0x100;
    if (iVar5 < 0x100) {
      iVar5 = 0x100;
    }
    *(short *)(param_1 + 0x50) = (short)iVar5;
    *(short *)(param_1 + 0x52) = (short)iVar5;
    if (iVar5 != 0x100) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xbd) + -1;
    *(char *)(param_1 + 0xbd) = cVar2;
    if (cVar2 == '\0') {
      cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
      cVar2 = '\0';
    }
  }
  *(char *)(param_1 + 0xd) = cVar2;
  return in_lr;
}

