// sub_08045954 at 0x08045954 (thumb)

undefined8 sub_08045954(int param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) != 0) || ((*(uint *)(param_1 + 0x8c) & 1) == 0)) goto LAB_080459f4;
  if (*(char *)(param_1 + 0xd) == '\t') {
    cVar1 = *(char *)(param_1 + 0x13);
    if (cVar1 == '\0') {
      puVar3 = &DAT_0835ed58;
      goto LAB_080459aa;
    }
    if (cVar1 == '\x01') {
      puVar3 = &DAT_0835ed60;
      goto LAB_080459aa;
    }
    if (cVar1 == '\x02') {
      puVar3 = &DAT_0835ed50;
      goto LAB_080459aa;
    }
    if (cVar1 == '\x03') {
      puVar3 = &DAT_0835ed68;
      goto LAB_080459aa;
    }
  }
  else {
    puVar3 = &DAT_0835ed38;
LAB_080459aa:
    iVar2 = sub_080253D8(0xd,param_1,puVar3);
    *(int *)(param_1 + 0xc0) = iVar2;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x30) {
      *(undefined *)(param_1 + 0xd0) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd1) = *(undefined *)(param_1 + 0xe);
      *(undefined *)(param_1 + 0xd2) = *(undefined *)(param_1 + 0xf);
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(int *)(param_1 + 0xc0) = 0;
    }
  }
LAB_080459f4:
  return CONCAT44(in_lr,1);
}

