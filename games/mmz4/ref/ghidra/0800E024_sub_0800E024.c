// sub_0800E024 at 0x0800E024 (thumb)

undefined4 sub_0800E024(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0x34) < 0x10e0) {
      puVar2 = &DAT_0202ea60;
      uVar1 = 0x38000;
    }
    else {
      puVar2 = &DAT_0202ea5c;
      uVar1 = 0x23000;
    }
    *puVar2 = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

