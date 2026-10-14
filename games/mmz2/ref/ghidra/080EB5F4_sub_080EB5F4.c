// sub_080EB5F4 at 0x080EB5F4 (thumb)

undefined4 sub_080EB5F4(int param_1)

{
  undefined uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x75b8);
  puVar4 = (undefined *)(param_1 + 0xdd9);
  sVar2 = sub_080D5D30(uVar3,*puVar4);
  if (sVar2 < 0) {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  else {
    *(undefined *)(param_1 + 3) = 1;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 0xdda) = (char)sVar2;
    sub_080DA984(param_1,1,*puVar4);
    sub_080DCF18(1,param_1,*puVar4);
    sub_080DD418(1,param_1,*puVar4);
    sub_08002638(&DAT_08433cdc,(DAT_0202e726 - 0x350) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433ce8,(DAT_0202e526 - 0xe) * 0x20 + 0x200);
    uVar1 = sub_080D6094(uVar3,*puVar4,*(undefined *)(param_1 + 0xdda));
    sub_080EBBD8(uVar3,uVar1);
    sub_080032EC(1);
  }
  return in_lr;
}

