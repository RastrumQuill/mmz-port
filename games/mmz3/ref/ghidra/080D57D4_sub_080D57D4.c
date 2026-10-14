// sub_080D57D4 at 0x080D57D4 (thumb)

undefined4 sub_080D57D4(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080177F4(param_1);
      puVar3 = (undefined *)(param_1 + 0x70);
      if (*(char *)(param_1 + 0x73) == '\x03') {
        if (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar3) == -0x3afe) {
          sub_08017700(param_1,0xc503);
        }
        else {
          sub_08017700(param_1,0xc501);
        }
      }
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
        if (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar3) == -0x3aff) {
          sub_08017700(param_1,0xc502);
        }
        if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
          return in_lr;
        }
      }
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar3) != -0x3afd) {
        return in_lr;
      }
      sub_08017700(param_1,0xc504);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    DAT_0202fd9a = 0x300;
    DAT_0202f79a = 6;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sVar2 = sub_080D0554(param_1,0xc501,1);
  if (sVar2 != 0) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

