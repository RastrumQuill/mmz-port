// sub_080AC6FC at 0x080AC6FC (thumb)

undefined4 sub_080AC6FC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12);
  bVar2 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  uVar3 = *(undefined4 *)(iVar4 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  if ((byte)(cVar1 - 1U) < 0x40) {
    if ((bVar2 & 3) != 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_080ac76a;
    }
  }
  else if ((bVar2 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    goto LAB_080ac76a;
  }
  bVar2 = *(byte *)(param_1 + 10) | 1;
LAB_080ac76a:
  *(byte *)(param_1 + 10) = bVar2;
  if ((*(char *)(param_1 + 0x73) == '\x03') || (*(char *)(param_1 + 0x12) == '\0')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

