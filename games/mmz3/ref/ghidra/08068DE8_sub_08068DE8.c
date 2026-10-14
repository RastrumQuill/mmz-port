// sub_08068DE8 at 0x08068DE8 (thumb)

undefined8 sub_08068DE8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xbc) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_080253D8(0,param_1,&DAT_083629b4);
    *(int *)(param_1 + 0xbc) = iVar1;
    if ((*(int *)(param_1 + 0xbc) == 0) &&
       (((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20 && (*(char *)(param_1 + 0xc0) == '\0')))) {
      *(char *)(param_1 + 0xc0) = 'd';
    }
  }
  return CONCAT44(in_lr,1);
}

