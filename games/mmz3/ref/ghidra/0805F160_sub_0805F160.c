// sub_0805F160 at 0x0805F160 (thumb)

undefined4 sub_0805F160(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar2 = sub_0806082C(param_1,*(undefined4 *)(param_1 + 0x5c));
  if ((cVar2 == '\0') &&
     (bVar1 = *(byte *)(param_1 + 10), bVar3 = sub_08060800(param_1), (bVar1 >> 4 & 1) == bVar3)) {
    if ((*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x40c0U < 0x8181) {
      iVar4 = sub_0800A104(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (iVar4 - *(int *)(DAT_0202f5c0 + 0x58) < 0x1400) {
        sub_0800471C(0xfb);
        *(undefined *)(param_1 + 0xf) = 1;
        sub_08060768(param_1,7);
      }
    }
  }
  else {
    *(undefined2 *)(param_1 + 0xe) = 2;
  }
  return in_lr;
}

