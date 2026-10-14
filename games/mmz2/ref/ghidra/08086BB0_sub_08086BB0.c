// sub_08086BB0 at 0x08086BB0 (thumb)

undefined4 sub_08086BB0(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xac08);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
  sub_08012A14(param_1);
  puVar2 = (uint *)(iVar1 + 0xb4);
  if ((*puVar2 & 2) != 0) {
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xf3 | 2;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*puVar2 & 4) != 0) {
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xf5 | 4;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*puVar2 & 8) != 0) {
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xf9 | 8;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*puVar2 & 0x180) != 0) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*puVar2 & 0x200) != 0) {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

