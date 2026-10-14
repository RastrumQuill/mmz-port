// sub_0806A77C at 0x0806A77C (thumb)

undefined4 sub_0806A77C(int param_1,uint param_2,uint param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar2 = (param_2 & 0xff) + (param_3 & 0xff) * 2 * (0x140 - (param_2 & 0xff)) + 0x80;
  uVar3 = uVar2 & 0xff;
  if ((uVar3 == *(byte *)(param_1 + 0x24)) && (param_4 == '\0')) {
    return in_lr;
  }
  if (uVar3 == 0) {
    sub_0801CC9C(param_1);
    *(char *)(param_1 + 0x4c) = (char)(param_3 & 1);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((param_3 & 1) << 4);
    if ((param_3 & 1) == 0) {
LAB_0806a82a:
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  else {
    if (*(byte *)(param_1 + 0x24) != 0) goto LAB_0806a832;
    sub_0801CD28(param_1);
    *(char *)(param_1 + 0x4c) = (char)(param_3 & 1);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((param_3 & 1) << 4);
    if ((param_3 & 1) == 0) goto LAB_0806a82a;
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
LAB_0806a832:
  *(char *)(param_1 + 0x24) = (char)uVar2;
  return in_lr;
}

