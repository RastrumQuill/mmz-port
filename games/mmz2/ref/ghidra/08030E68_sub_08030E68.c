// sub_08030E68 at 0x08030E68 (thumb)

undefined8 sub_08030E68(int param_1,undefined4 param_2,byte *param_3)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar2 = 0;
  if (param_3 != (byte *)0x0) {
    iVar2 = -((int)-(uint)*param_3 >> 0x1f);
    if (iVar2 == 0) {
      uVar3 = *(undefined4 *)(param_3 + 0x20);
      uVar4 = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_1 + 0x200) = uVar3;
      *(undefined4 *)(param_1 + 0x204) = uVar4;
      uVar3 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(param_1 + 0x20c) = uVar3;
      uVar3 = *(undefined4 *)(param_3 + 0x34);
      uVar4 = *(undefined4 *)(param_3 + 0x38);
      *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_3 + 0x30);
      *(undefined4 *)(param_1 + 0x214) = uVar3;
      *(undefined4 *)(param_1 + 0x218) = uVar4;
      uVar3 = *(undefined4 *)(param_3 + 0x40);
      uVar4 = *(undefined4 *)(param_3 + 0x44);
      *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_3 + 0x3c);
      *(undefined4 *)(param_1 + 0x220) = uVar3;
      *(undefined4 *)(param_1 + 0x224) = uVar4;
      sub_080EF3F0(param_1 + 0x228,param_3 + 0x48,100);
      sub_080D5790(param_1);
      goto LAB_08030ecc;
    }
  }
  sub_08031738(param_1);
  sub_080338CC(param_1);
  sub_080D5630(param_1);
LAB_08030ecc:
  uVar1 = sub_08037A3C(param_1);
  *(undefined *)(param_1 + 0x17e) = uVar1;
  sub_08037CC8(param_1);
  return CONCAT44(in_lr,iVar2);
}

