// sub_080D5790 at 0x080D5790 (thumb)

undefined4 sub_080D5790(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = 0;
  do {
    uVar3 = uVar1 + 1;
    if (*(char *)(param_1 + 0x20a + uVar1) == '\0') {
      puVar2 = (undefined *)(uVar1 + param_1 + 0x20a);
      do {
        *puVar2 = puVar2[1];
        puVar2 = puVar2 + 1;
        uVar1 = uVar1 + 1;
      } while (uVar1 < 2);
      *(undefined *)(param_1 + 0x20c) = 0;
    }
    uVar1 = uVar3;
  } while (uVar3 < 2);
  return in_lr;
}

