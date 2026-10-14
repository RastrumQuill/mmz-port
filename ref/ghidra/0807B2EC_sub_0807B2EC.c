// sub_0807B2EC at 0x0807B2EC (thumb)

undefined4 sub_0807B2EC(undefined4 *param_1,undefined param_2,char param_3,undefined param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005458(DAT_02022f74);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0x11;
    *(undefined4 *)(iVar2 + 0x14) = 0x807b365;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02022fa2;
    *(undefined *)(iVar2 + 0x1e) = DAT_02022ff1;
    *(undefined *)(iVar2 + 0x10) = param_2;
    *(char *)(iVar2 + 0x11) = param_3;
    *(undefined *)(iVar2 + 0x13) = param_4;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x4c) = *param_1;
    *(undefined4 *)(iVar2 + 0x50) = uVar3;
    *(char *)(iVar2 + 0x44) = param_3;
    if (param_3 == '\0') {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
  }
  return in_lr;
}

