// sub_080CB5DC at 0x080CB5DC (thumb)

undefined4 sub_080CB5DC(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  uVar3 = (uint)DAT_02030109 << 0x18;
  uVar3 = (uVar3 >> 0x19 & 1) + (uVar3 >> 0x1a & 1) + (uVar3 >> 0x1b & 1) + (uVar3 >> 0x1c & 1);
  if ((((byte)(*(char *)(param_1 + 0x10) - 3U) < 2) && (2 < uVar3)) ||
     (((byte)(*(char *)(param_1 + 0x10) - 5U) < 2 && (uVar3 < 3)))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x10);
    if (((cVar1 == '\0') || (cVar1 == '\x03')) || (cVar1 == '\x05')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836c5d8,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80cb5d9;
    sub_080CB6C8(param_1);
  }
  return in_lr;
}

