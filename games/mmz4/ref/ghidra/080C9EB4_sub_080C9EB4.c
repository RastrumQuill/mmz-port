// sub_080C9EB4 at 0x080C9EB4 (thumb)

undefined8 sub_080C9EB4(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if (*(char *)(param_1 + 0xb7) != '\0') {
      puVar1 = (uint *)(param_1 + 0xb8);
      uVar3 = *(uint *)(param_1 + 0x54);
      goto LAB_080c9eea;
    }
    puVar1 = (uint *)(param_1 + 0xb8);
    uVar3 = *(uint *)(param_1 + 0x54);
LAB_080c9efa:
    if (*puVar1 < uVar3) goto LAB_080c9f00;
  }
  else {
    if (*(char *)(param_1 + 0xb6) == '\0') {
      puVar1 = (uint *)(param_1 + 0xbc);
      uVar3 = *(uint *)(param_1 + 0x58);
      goto LAB_080c9efa;
    }
    puVar1 = (uint *)(param_1 + 0xbc);
    uVar3 = *(uint *)(param_1 + 0x58);
LAB_080c9eea:
    if (uVar3 < *puVar1) {
LAB_080c9f00:
      uVar2 = 0;
      goto LAB_080c9f02;
    }
  }
  uVar2 = 1;
LAB_080c9f02:
  return CONCAT44(in_lr,uVar2);
}

