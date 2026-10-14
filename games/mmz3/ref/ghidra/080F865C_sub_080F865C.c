// sub_080F865C at 0x080F865C (thumb)

undefined8 sub_080F865C(int param_1,uint param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  uVar4 = param_2 & 0xff;
  iVar3 = *(int *)(param_1 + 0x64ac);
  if ((param_3 != '\0') && (((uVar4 - 6 & 0xff) < 0xe || (0x6d < uVar4)))) {
LAB_080f8744:
    iVar3 = 0;
    goto LAB_080f875e;
  }
  pbVar5 = (byte *)(DAT_0203df90 + (uVar4 >> 2));
  bVar2 = *pbVar5;
  if (((int)(uint)bVar2 >> (param_2 & 3) + 4 & 1U) != 0) goto LAB_080f8744;
  *pbVar5 = bVar2 | (byte)(0x10 << (param_2 & 3));
  switch(uVar4) {
  case 0:
    bVar2 = *(byte *)(iVar3 + 0xcb);
    bVar1 = 4;
    break;
  case 1:
    bVar2 = *(byte *)(iVar3 + 0xcb);
    bVar1 = 2;
    break;
  case 2:
    bVar2 = *(byte *)(iVar3 + 0xcb);
    bVar1 = 8;
    break;
  case 3:
    bVar2 = *(byte *)(iVar3 + 0xcd);
    bVar1 = 0x40;
    goto LAB_080f8712;
  case 4:
    bVar2 = *(byte *)(iVar3 + 0xcd);
    bVar1 = 2;
    goto LAB_080f8712;
  case 5:
    bVar2 = *(byte *)(iVar3 + 0xcd);
    bVar1 = 0x80;
LAB_080f8712:
    *(byte *)(iVar3 + 0xcd) = bVar1 | bVar2;
    goto LAB_080f8716;
  default:
    if (uVar4 < 0x14) goto LAB_080f8744;
    if (uVar4 < 0x5e) {
      pbVar5 = (byte *)(uVar4 + DAT_0203063c + -0x14);
      *pbVar5 = *pbVar5 | 1;
    }
    else {
      if (0x6d < uVar4) goto LAB_080f8744;
      sub_08025AA0(iVar3,*(undefined2 *)(&DAT_0838bbbc + (uVar4 - 0x5e) * 2));
    }
    iVar3 = 0x10d;
    goto LAB_080f875c;
  }
  *(byte *)(iVar3 + 0xcb) = bVar1 | bVar2;
LAB_080f8716:
  iVar3 = 0x17b;
LAB_080f875c:
  iVar3 = uVar4 + iVar3;
LAB_080f875e:
  return CONCAT44(in_lr,iVar3);
}

