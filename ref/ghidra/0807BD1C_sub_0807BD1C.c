// sub_0807BD1C at 0x0807BD1C (thumb)

undefined4 sub_0807BD1C(undefined4 *param_1,char param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005458(DAT_02022f74);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0x13;
    *(undefined4 *)(iVar2 + 0x14) = 0x807bed5;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02022fa6;
    *(undefined *)(iVar2 + 0x1e) = DAT_02022ff3;
    *(undefined *)(iVar2 + 0x10) = 5;
    *(undefined *)(iVar2 + 0x11) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x4c) = *param_1;
    *(undefined4 *)(iVar2 + 0x50) = uVar3;
    *(char *)(iVar2 + 0x44) = param_2;
    if (param_2 == '\0') {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(undefined4 *)(iVar2 + 0x20) = param_3;
  }
  return in_lr;
}

