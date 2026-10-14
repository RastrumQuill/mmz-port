// sub_080370FC at 0x080370FC (thumb)

undefined8 sub_080370FC(int param_1,int *param_2,undefined param_3,uint param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  sub_08036FA8(0x803834d);
  iVar2 = sub_0800710C(DAT_020305e0);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0xe4) == '\0') {
      *(undefined *)(iVar2 + 9) = 0;
      *(undefined4 *)(iVar2 + 0x14) = 0x803726d;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 1;
      sub_08036F90(0,*(undefined *)(param_1 + 0xc2));
    }
    else {
      *(undefined *)(iVar2 + 9) = 0;
      *(undefined4 *)(iVar2 + 0x14) = 0x803726d;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(undefined2 *)(iVar2 + 0x20) = 0x30;
      *(undefined *)(iVar2 + 0x22) = 1;
      sub_08036F90(1,*(undefined *)(param_1 + 0xc2));
    }
    *(int *)(iVar2 + 0xb4) = param_1;
    iVar3 = param_2[1];
    *(int *)(iVar2 + 0xb8) = *param_2;
    *(int *)(iVar2 + 0xbc) = iVar3;
    *(int *)(iVar2 + 0x54) = *(int *)(param_1 + 0x54) + *param_2;
    *(int *)(iVar2 + 0x58) = *(int *)(param_1 + 0x58) + param_2[1];
    *(undefined *)(iVar2 + 0x10) = param_3;
    *(undefined *)(iVar2 + 0x11) = 0;
    if ((param_4 & 0xff) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x4c) = (char)(param_4 & 1);
    pbVar4 = (byte *)(iVar2 + 0x4a);
    *pbVar4 = *pbVar4 & 0xef | (byte)((param_4 & 1) << 4);
    if ((param_5 & 0xff) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x20;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x4d) = (char)(param_5 & 1);
    *pbVar4 = *pbVar4 & 0xdf | (byte)((param_5 & 1) << 5);
    *(undefined *)(iVar2 + 0xc1) = *(undefined *)(param_1 + 0xc2);
  }
  return CONCAT44(in_lr,iVar2);
}

