// sub_080658C4 at 0x080658C4 (thumb)

undefined4 sub_080658C4(undefined4 *param_1,undefined param_2,char param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005458(DAT_02022e98);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0x2a;
    *(undefined4 *)(iVar2 + 0x14) = 0x8065941;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02022ef4;
    *(undefined *)(iVar2 + 0x1e) = DAT_02022f5a;
    *(undefined *)(iVar2 + 0x10) = param_2;
    *(undefined *)(iVar2 + 0x11) = 0;
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
    *(undefined4 *)(iVar2 + 0x20) = param_4;
  }
  return in_lr;
}

