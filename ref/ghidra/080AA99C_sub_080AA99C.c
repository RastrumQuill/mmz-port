// sub_080AA99C at 0x080AA99C (thumb)

undefined4 sub_080AA99C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_20;
  undefined4 local_1c;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0809C930(param_1,0);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x28) = &DAT_082b6514;
    *(undefined4 *)(param_1 + 0x58) = 0;
    local_20 = *(int *)(param_1 + 0x4c) + 0x800;
    local_1c = *(undefined4 *)(param_1 + 0x50);
    sub_0808827C(3,&local_20);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x58) < 0x700) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  sub_0809C980(param_1);
  if (iVar2 <= *(int *)(param_1 + 0x50)) {
    iVar2 = 3;
    do {
      uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar4 & 0x7fffffff;
      local_20 = *(int *)(param_1 + 0x4c) + (uVar4 * 8 >> 0x13) + 0x800;
      local_1c = *(undefined4 *)(param_1 + 0x50);
      sub_0808827C(3,&local_20);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0;
    sub_08001EAC(10);
    sub_0801412C(2,param_1 + 0x4c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

