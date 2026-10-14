// sub_0804EC80 at 0x0804EC80 (thumb)

undefined4 sub_0804EC80(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0x20;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      *(int *)(param_1 + 0x4c) = DAT_02022c7c + 0x97ff;
      goto LAB_0804ed32;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08048ACC(param_1);
    *(undefined2 *)(param_1 + 0x48) = 0x80;
    *(undefined2 *)(param_1 + 0x4a) = 0x80;
    *(int *)(param_1 + 0x4c) = DAT_02022c7c + -0x9800;
    *(undefined4 *)(param_1 + 0x54) = 0x2c0;
    sub_080033F0(param_1 + 0x6c,2);
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  uVar3 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (0x3000 < uVar3) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_0804ed32:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

