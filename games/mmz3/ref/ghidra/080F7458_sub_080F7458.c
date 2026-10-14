// sub_080F7458 at 0x080F7458 (thumb)

undefined4 sub_080F7458(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 == 2) {
    iVar2 = 0xb8;
    goto LAB_080f74e0;
  }
  if (bVar1 < 3) {
    if ((bVar1 == 0) && (*(char *)(*(int *)(param_1 + 0x64ac) + 0xce) != '\x01')) {
      iVar2 = 0xb4;
      goto LAB_080f74e0;
    }
    goto switchD_080f74a0_caseD_4;
  }
  if (bVar1 != 3) goto switchD_080f74a0_caseD_4;
  switch(*(undefined *)(param_1 + 0xe03)) {
  case 0:
  case 1:
    iVar2 = 0xb9;
    break;
  case 2:
    iVar2 = 0xba;
    break;
  case 3:
    iVar2 = 0xc5;
    if (*(char *)(param_1 + 0xe17) == '\x04') break;
    iVar2 = 0xc0;
    if (*(char *)(param_1 + 0xe17) == '\x05') {
      iVar2 = 0xc6;
    }
  default:
switchD_080f74a0_caseD_4:
    if (iVar2 == 0) {
      return in_lr;
    }
  }
LAB_080f74e0:
  sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[iVar2],1,0x12);
  return in_lr;
}

