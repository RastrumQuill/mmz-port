// sub_08042DE4 at 0x08042DE4 (thumb)

undefined8 sub_08042DE4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar1 = sub_08015A64(0xf,param_1,&DAT_082ae7e0);
      *(int *)(param_1 + 0x24) = iVar1;
      if (iVar1 != 0) {
        *(undefined *)(param_1 + 0xd) = 0x19;
        *(undefined *)(param_1 + 0xe) = 0;
        sub_08045110(param_1);
        uVar2 = 1;
        goto LAB_08042e3a;
      }
    }
    if (*(char *)(param_1 + 0xf) != '\0') {
      *(undefined *)(param_1 + 0xd) = 0x16;
      *(undefined *)(param_1 + 0xe) = 0;
      sub_08044E50(param_1);
      uVar2 = 1;
      goto LAB_08042e3a;
    }
  }
  uVar2 = 0;
LAB_08042e3a:
  return CONCAT44(in_lr,uVar2);
}

