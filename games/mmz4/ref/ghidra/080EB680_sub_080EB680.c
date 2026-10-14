// sub_080EB680 at 0x080EB680 (thumb)

undefined4 sub_080EB680(int param_1)

{
  short sVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + -0x1200;
  sub_080D0894(1,&local_1c);
  sVar1 = sub_08007C7C(local_1c,local_18);
  if (sVar1 == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      sub_080D4898(&local_1c,&DAT_0885b4e0,0,*(byte *)(param_1 + 10) & 0x10);
      uVar4 = 1;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar4 = 0x11;
      }
      sub_080D4898(&local_1c,&DAT_0885b4e0,0,uVar4);
      sub_080D4898(&local_1c,&DAT_0885b4fc,0,*(byte *)(param_1 + 10) & 0x10);
      uVar4 = 1;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar4 = 0x11;
      }
      sub_080D4898(&local_1c,&DAT_0885b4fc,0,uVar4);
      sub_080D4898(&local_1c,&DAT_0885b550,0,*(byte *)(param_1 + 10) & 0x10);
    }
    else {
      pbVar2 = (byte *)(param_1 + 0xbc);
      bVar3 = *pbVar2;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar3 = bVar3 | 0x10;
      }
      sub_080D4898(&local_1c,&DAT_0885b4e0,0,bVar3);
      bVar3 = *pbVar2;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar3 = bVar3 | 0x10;
      }
      sub_080D4898(&local_1c,&DAT_0885b4e0,0,bVar3);
      bVar3 = *pbVar2;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar3 = bVar3 | 0x10;
      }
      sub_080D4898(&local_1c,&DAT_0885b4fc,0,bVar3);
      bVar3 = *pbVar2;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar3 = bVar3 | 0x10;
      }
      sub_080D4898(&local_1c,&DAT_0885b4fc,0,bVar3);
      bVar3 = *pbVar2;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar3 = bVar3 | 0x10;
      }
      sub_080D4898(&local_1c,&DAT_0885b550,0,bVar3);
    }
  }
  sub_08002B10(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

