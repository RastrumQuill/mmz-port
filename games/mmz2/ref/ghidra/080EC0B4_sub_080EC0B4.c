// sub_080EC0B4 at 0x080EC0B4 (thumb)

undefined4 sub_080EC0B4(int param_1)

{
  undefined uVar1;
  short sVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 0x75b8);
  puVar3 = (undefined *)(param_1 + 0xdd8);
  sVar2 = sub_080D5D30(uVar4,*puVar3);
  if (sVar2 < 0) {
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  else {
    *(undefined *)(param_1 + 3) = 1;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 0xdd9) = (char)sVar2;
    sub_080DA984(param_1,2,*puVar3);
    sub_080DCF18(2,param_1,*puVar3);
    sub_080DD418(2,param_1,*puVar3);
    uVar1 = sub_080D6094(uVar4,*puVar3,*(undefined *)(param_1 + 0xdd9));
    sub_080ECC64(uVar4,uVar1);
    sub_080032EC(1);
  }
  return in_lr;
}

