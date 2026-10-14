// sub_08125894 at 0x08125894 (thumb)

undefined8 sub_08125894(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xde5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        uVar3 = sub_080D3AC8(0);
        *(undefined4 *)(param_1 + 0xdd0) = uVar3;
        sub_08002B10(0x1e);
        *(char *)(param_1 + 0xde5) = *(char *)(param_1 + 0xde5) + '\x01';
      }
      else if ((bVar1 == 3) && (1 < *(byte *)(*(int *)(param_1 + 0xdd0) + 0xc))) {
        *(char *)(param_1 + 0xde4) = *(char *)(param_1 + 0xde4) + '\x01';
        *(undefined *)(param_1 + 0xde5) = 0;
      }
      goto LAB_0812590c;
    }
    if (bVar1 != 0) goto LAB_0812590c;
    *(undefined *)(param_1 + 0xde8) = 0x3c;
    *(char *)(param_1 + 0xde5) = *(char *)(param_1 + 0xde5) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0xde8) + -1;
  *(char *)(param_1 + 0xde8) = cVar2;
  if (cVar2 == -1) {
    *(char *)(param_1 + 0xde5) = *(char *)(param_1 + 0xde5) + '\x01';
  }
LAB_0812590c:
  *(undefined *)(*(int *)(param_1 + 0xdcc) + 0x254) = 1;
  return CONCAT44(in_lr,1);
}

