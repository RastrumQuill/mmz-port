// sub_080AA78C at 0x080AA78C (thumb)

undefined4 sub_080AA78C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_080aa88c;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0809C930(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0809C980(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  iVar5 = 0xf;
  do {
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    local_28 = *(int *)(param_1 + 0x4c) + (uVar3 * 8 >> 0x13) + -0x1800;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    local_24 = (*(int *)(param_1 + 0x50) - (uVar3 * 2 >> 0x11)) + 0x2000;
    sub_08088398(3,&local_28,0x200,0);
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0808D840(&local_28,0,(int)((0xfe00 - (uVar3 * 0x40 >> 0x16)) * 0x10000) >> 0x10,
                 -(uVar4 * 0x80 >> 0x17));
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  sub_08001EAC(2);
  sub_08001EAC(10);
  sub_0801412C(8,param_1 + 0x4c);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined *)(param_1 + 0x12) = 0x10;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080aa88c:
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  local_28 = *(int *)(param_1 + 0x4c) + (uVar3 * 0x10 >> 0x14) + -0x800;
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  local_24 = (*(int *)(param_1 + 0x50) - (uVar3 * 2 >> 0x11)) + 0x800;
  sub_08088398(3,&local_28,0x200,0);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

