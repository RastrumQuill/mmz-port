// sub_0803C490 at 0x0803C490 (thumb)

undefined8 sub_0803C490(int param_1,undefined param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined uVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_0803A970(0x803c449);
  iVar3 = sub_08005500(DAT_0202ed88);
  if (iVar3 == 0) goto LAB_0803c5ae;
  iVar1 = (int)-(*(byte *)(param_1 + 0xf8) ^ 1) >> 0x1f;
  iVar5 = -iVar1;
  *(undefined *)(iVar3 + 9) = 1;
  *(undefined4 *)(iVar3 + 0x14) = 0x803c5bd;
  if (iVar1 < -1) {
    bVar2 = *(byte *)(iVar3 + 0xb) | 0x40;
  }
  else {
    bVar2 = *(byte *)(iVar3 + 0xb) & 0xbf;
  }
  *(byte *)(iVar3 + 0xb) = bVar2;
  *(undefined *)(iVar3 + 0x25) = 0x10;
  *(undefined2 *)(iVar3 + 0x20) = (&DAT_088501c0)[(short)iVar5];
  *(undefined1 *)(iVar3 + 0x22) = (&DAT_088501c8)[(short)iVar5];
  switch(param_2) {
  case 8:
  case 9:
  case 10:
  case 0xb:
    uVar4 = *(undefined *)(param_1 + 0xc2);
    break;
  default:
    sub_0803A8E0(iVar5,0,1);
    goto LAB_0803c59c;
  case 0xf:
  case 0x11:
    uVar4 = 2;
    break;
  case 0x13:
    uVar4 = 1;
    break;
  case 0x16:
    uVar4 = 0;
  }
  sub_0803A8E0(iVar5,uVar4,1);
LAB_0803c59c:
  *(undefined *)(param_1 + 0x149) = param_2;
  *(int *)(iVar3 + 0xb4) = param_1;
  *(undefined *)(iVar3 + 0x10) = param_2;
  *(undefined *)(iVar3 + 0x11) = 0;
LAB_0803c5ae:
  return CONCAT44(in_lr,iVar3);
}

