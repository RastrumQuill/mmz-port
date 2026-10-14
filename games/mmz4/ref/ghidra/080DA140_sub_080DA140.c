// sub_080DA140 at 0x080DA140 (thumb)

undefined8 sub_080DA140(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x23;
    *(undefined4 *)(iVar1 + 0x14) = 0x80da191;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = *param_1;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = uVar2;
    *(undefined4 *)(iVar1 + 0x58) = uVar3;
    *(undefined4 *)(iVar1 + 100) = uVar2;
    *(undefined4 *)(iVar1 + 0x68) = uVar3;
  }
  return CONCAT44(in_lr,iVar1);
}

