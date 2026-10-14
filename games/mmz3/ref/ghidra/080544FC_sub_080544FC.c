// sub_080544FC at 0x080544FC (thumb)

undefined8 sub_080544FC(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) != 0) || ((*(uint *)(param_1 + 0x8c) & 1) == 0)) goto LAB_0805455e;
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x4fe7) {
    if ((*(char *)(param_1 + 0xd) == '\x04') && (*(char *)(param_1 + 0xe) != '\x06')) {
      puVar2 = &DAT_08360238;
      goto LAB_08054546;
    }
  }
  else {
    puVar2 = &DAT_08360230;
LAB_08054546:
    iVar1 = sub_080253D8(0x16,param_1,puVar2);
    *(int *)(param_1 + 0xc0) = iVar1;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    *(int *)(param_1 + 0xc0) = 0;
  }
LAB_0805455e:
  return CONCAT44(in_lr,1);
}

