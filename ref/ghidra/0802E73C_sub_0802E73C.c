// sub_0802E73C at 0x0802E73C (thumb)

undefined8 sub_0802E73C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*(int *)(param_1 + 0xcc) == 0) {
      iVar1 = sub_08015A64(4,param_1,&DAT_082ad298);
      *(int *)(param_1 + 0xcc) = iVar1;
      if (iVar1 != 0) {
        if (-1 < *(short *)(param_1 + 0xd4)) {
          sub_08001EE8();
          *(short *)(param_1 + 0xd4) = -1;
        }
        *(undefined *)(param_1 + 0xd) = 0x1b;
        *(undefined *)(param_1 + 0xe) = 0;
        uVar2 = 1;
        goto LAB_0802e78e;
      }
    }
  }
  uVar2 = 0;
LAB_0802e78e:
  return CONCAT44(in_lr,uVar2);
}

