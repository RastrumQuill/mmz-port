// sub_08124EFC at 0x08124EFC (thumb)

undefined8 sub_08124EFC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  uVar3 = sub_08128884(param_1,*(undefined4 *)(&DAT_088865d0 + (uint)*(byte *)(param_1 + 0xde4) * 4)
                      );
  *(undefined2 *)(*(int *)(param_1 + 0xdcc) + 0xa4) = 0x10;
  if ((*(uint *)(param_1 + 0xdf0) & 3) == 1) {
    iVar6 = *(int *)(param_1 + 0xde0);
    iVar4 = FUN_081288bc(0xe10 - iVar6,0x3c);
    *(int *)(param_1 + 0xdd4) = iVar4 * 0x3c;
    iVar6 = sub_08128954(iVar6,0x3c);
    iVar6 = FUN_081288bc(iVar6 * 0xa7,100);
    iVar6 = FUN_081288bc((100U - iVar6 & 0xff) * 100,0xa7);
    *(int *)(param_1 + 0xdd4) = iVar4 * 0x3c + iVar6;
  }
  sub_0810D3E4(&DAT_08136450,1,0);
  uVar5 = FUN_081288bc(*(undefined4 *)(param_1 + 0xdd4),0x3c);
  sub_0810D498(uVar5,7,0);
  sub_0810D3E4(&DAT_08136458,8,0);
  if (*(int *)(param_1 + 0xde0) == 0xe10) {
    bVar2 = 0;
  }
  else {
    iVar4 = sub_08128954(*(int *)(param_1 + 0xde0),0x3c);
    cVar1 = FUN_081288bc(iVar4 * 0xa7,100);
    bVar2 = 100 - cVar1;
  }
  if (bVar2 == 100) {
    bVar2 = 0;
  }
  sub_0810D498(bVar2,10,0);
  if (bVar2 < 10) {
    sub_0810D498(0,9,0);
  }
  sub_0810D3E4("BEST TIME",0xd,0);
  uVar5 = FUN_081288bc(*(undefined4 *)(param_1 + 0xddc),0x3c);
  sub_0810D498(uVar5,0x18,0);
  sub_0810D3E4(&DAT_08136458,0x19,0);
  iVar4 = sub_08128954(0xe10 - *(int *)(param_1 + 0xddc),0x3c);
  cVar1 = FUN_081288bc(iVar4 * 0xa7,100);
  bVar2 = 100 - cVar1;
  if (bVar2 == 100) {
    bVar2 = 0;
  }
  sub_0810D498(bVar2,0x1b,0);
  if (bVar2 < 10) {
    sub_0810D498(0,0x1a,0);
  }
  sub_0810D3E4(&DAT_08136468,9,0x12);
  uVar5 = FUN_081288bc(*(undefined4 *)(param_1 + 0xde0),0x3c);
  sub_0810D498(uVar5,0xf,0x12);
  sub_0810D3E4(&DAT_08136458,0x10,0x12);
  iVar4 = sub_08128954(*(undefined4 *)(param_1 + 0xde0),0x3c);
  bVar2 = FUN_081288bc(iVar4 * 0xa7,100);
  if (bVar2 == 100) {
    bVar2 = 0;
  }
  sub_0810D498(bVar2,0x12,0x12);
  if (bVar2 < 10) {
    sub_0810D498(0,0x11,0x12);
  }
  return CONCAT44(in_lr,uVar3);
}

