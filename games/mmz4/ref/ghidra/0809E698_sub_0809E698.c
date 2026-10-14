// sub_0809E698 at 0x0809E698 (thumb)

undefined4 sub_0809E698(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  if (*(byte *)(param_1 + 0x11) < 2) {
    iVar2 = *(int *)(param_1 + 0xb8) + *(int *)(&DAT_081295ec + (uint)*(byte *)(param_1 + 0x11) * 4)
    ;
    if (iVar2 <= iVar3) goto LAB_0809e6dc;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb8) + *(int *)(&DAT_081295ec + (uint)*(byte *)(param_1 + 0x11) * 4)
    ;
    if (iVar3 <= iVar2) goto LAB_0809e6dc;
  }
  *(int *)(param_1 + 0x58) = iVar2;
LAB_0809e6dc:
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x15') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    }
    else {
      *(undefined4 *)(param_1 + 100) = 0x10;
    }
  }
  return in_lr;
}

