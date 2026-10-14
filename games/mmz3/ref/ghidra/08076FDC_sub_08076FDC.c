// sub_08076FDC at 0x08076FDC (thumb)

undefined8 sub_08076FDC(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  uint *puVar3;
  undefined uVar4;
  undefined4 in_lr;
  
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((*puVar3 & 0x200) == 0) {
    uVar1 = 0;
    goto LAB_0807706e;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    uVar4 = 1;
    if ((*puVar3 & 0x10000) == 0) {
      if ((*puVar3 & 0x20000) == 0) {
        *(undefined *)(param_1 + 0xd) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 2;
      }
    }
    else {
LAB_08077058:
      *(undefined *)(param_1 + 0xd) = uVar4;
    }
  }
  else {
    if (*(int *)(param_1 + 0x28) != 0) {
      pcVar2 = (char *)(*(int *)(param_1 + 0x28) + 0xb8);
      *pcVar2 = *pcVar2 + -1;
    }
    uVar4 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if ((*puVar3 & 0x20000) != 0) goto LAB_08077058;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  sub_0807731C(param_1);
  uVar1 = 1;
LAB_0807706e:
  return CONCAT44(in_lr,uVar1);
}

