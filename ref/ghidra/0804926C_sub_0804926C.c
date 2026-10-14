// sub_0804926C at 0x0804926C (thumb)

undefined4 sub_0804926C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + -0xa80,*(int *)(param_1 + 0x50) + -0x600);
  if ((cVar1 == '\0') &&
     (cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + -0xa80,*(int *)(param_1 + 0x50) + 0xa00),
     cVar1 != '\0')) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_080033F0(param_1 + 0x6c,1);
      *(undefined *)(param_1 + 0x44) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      sub_0800561C(param_1 + 0x74,&DAT_082aec2c);
      *(undefined4 *)(param_1 + 0x54) = 0xffffff80;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar3;
    if ((0x5fff < *(uint *)(param_1 + 0xc0)) && (0x2800 < *(int *)(param_1 + 0xb8) - iVar3)) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  else {
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

