// sub_080C4A24 at 0x080C4A24 (thumb)

undefined8 sub_080C4A24(int param_1)

{
  undefined uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = sub_080B4A14(uVar3,*(undefined *)(param_1 + 4));
  if ((short)uVar2 < 0) {
    *(undefined *)(param_1 + 1) = 0;
    *(undefined2 *)(param_1 + 2) = 1;
  }
  else {
    *(undefined2 *)(param_1 + 2) = 1;
    *(char *)(param_1 + 5) = (char)uVar2;
    sub_080B9920(param_1,0,*(undefined *)(param_1 + 4));
    sub_080BB4D0(0,param_1,*(undefined *)(param_1 + 4));
    sub_080BB978(0,param_1,*(undefined *)(param_1 + 4));
    uVar1 = sub_080B4DA4(uVar3,*(undefined *)(param_1 + 4),uVar2 & 0xff);
    sub_080C4C24(uVar3,uVar1);
    sub_08001EAC(0x29);
  }
  return CONCAT44(in_lr,1);
}

