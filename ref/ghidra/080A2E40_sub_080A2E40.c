// sub_080A2E40 at 0x080A2E40 (thumb)

undefined4 sub_080A2E40(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_24;
  int local_20;
  uint *local_1c;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_080a2f02;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    DAT_02004f30 = DAT_02004f30 & 0xc1ff;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    local_1c = &DAT_02022890;
    iVar4 = 0xf;
    do {
      uVar3 = *local_1c * 0x343fd + 0x269ec3;
      local_24 = *(int *)(param_1 + 0x4c) + (uVar3 * 0x10 >> 0x14) + -0x800;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      *local_1c = uVar3 & 0x7fffffff;
      local_20 = (*(int *)(param_1 + 0x50) - (uVar3 * 2 >> 0x11)) + 0x2000;
      sub_0808827C(1,&local_24);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    sub_08001EAC(2);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  DAT_02004f30 = DAT_02004f30 | 0x3e00;
  *(undefined *)(param_1 + 0x12) = 0x20;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080a2f02:
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  local_24 = *(int *)(param_1 + 0x4c) + (uVar3 * 0x10 >> 0x14) + -0x800;
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  local_20 = (*(int *)(param_1 + 0x50) - (uVar3 * 2 >> 0x11)) + 0x800;
  sub_08088398(3,&local_24,0x200,0);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

