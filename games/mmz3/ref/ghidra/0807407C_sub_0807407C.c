// sub_0807407C at 0x0807407C (thumb)

undefined4 sub_0807407C(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(char *)(param_1 + 0xd) != '\x01')) {
    piVar1 = (int *)(param_1 + 0xb4);
    if ((*piVar1 == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
      if ((*(uint *)(param_1 + 0x8c) & 0x20000) == 0) {
        if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
          puVar3 = &DAT_083637cc;
        }
        else {
          puVar3 = &DAT_083637c4;
        }
        iVar2 = sub_080253D8(0,param_1,puVar3);
        *piVar1 = iVar2;
        if (*piVar1 != 0) {
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      else {
        *(undefined *)(param_1 + 0xd) = 10;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}

