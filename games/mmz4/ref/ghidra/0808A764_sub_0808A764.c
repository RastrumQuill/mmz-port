// sub_0808A764 at 0x0808A764 (thumb)

undefined4 sub_0808A764(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      local_14 = *(int *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58);
      sub_08002B10(0x138);
      uVar3 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 8;
      local_14 = *(int *)(&DAT_0885bfec + uVar3) + local_14;
      local_10 = *(int *)(&DAT_0885bff0 + uVar3) + local_10;
      sub_080BE150(&local_14,((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c & 1);
      cVar2 = '\0';
      *(undefined *)(param_1 + 0xd) = 0;
      goto LAB_0808a824;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xc2) = 0;
    sub_0801CF00(param_1,0x200a);
    sub_08005784(param_1 + 0x74,&DAT_0885bf80);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_0808AFE4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0808a824:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

