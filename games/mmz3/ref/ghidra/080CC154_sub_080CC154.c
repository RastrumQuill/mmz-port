// sub_080CC154 at 0x080CC154 (thumb)

undefined4 sub_080CC154(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0x3a00);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) goto LAB_080cc1c6;
      cVar2 = sub_080CC2C8(iVar3);
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      goto LAB_080cc1c6;
    }
    if (bVar1 != 0) goto LAB_080cc1c6;
    sub_08017700(param_1,0x3a01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = sub_080CC2C8(iVar3);
  if (cVar2 != '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
LAB_080cc1c6:
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + -0xf00;
  return in_lr;
}

