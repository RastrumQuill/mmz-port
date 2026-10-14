// sub_0803BA70 at 0x0803BA70 (thumb)

undefined8 sub_0803BA70(int param_1,undefined4 *param_2,undefined param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e0);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xe4) == '\0') {
      *(undefined *)(iVar1 + 9) = 10;
      *(undefined4 *)(iVar1 + 0x14) = 0x803bb61;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0;
    }
    else {
      *(undefined *)(iVar1 + 9) = 10;
      *(undefined4 *)(iVar1 + 0x14) = 0x803bb61;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *(undefined *)(iVar1 + 0x25) = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0x30;
    }
    *(undefined *)(iVar1 + 0x22) = 1;
    *(int *)(iVar1 + 0x28) = param_1;
    if ((param_4 & 0xff) == 0) {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xef;
    }
    else {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) | 0x10;
    }
    *(char *)(iVar1 + 0x4c) = (char)(param_4 & 1);
    *(byte *)(iVar1 + 0x4a) = *(byte *)(iVar1 + 0x4a) & 0xef | (byte)((param_4 & 1) << 4);
    uVar2 = param_2[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

