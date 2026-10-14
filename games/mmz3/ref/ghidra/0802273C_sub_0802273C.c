// sub_0802273C at 0x0802273C (thumb)

undefined8 sub_0802273C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xc);
  switch(*(undefined2 *)(iVar3 + 2)) {
  case 0:
    DAT_020023c6 = 0x284;
    DAT_020023d0 = 0;
    DAT_020023c0 = DAT_020023c0 | 0x1200;
    sub_0800393C(&DAT_08547280 + (uint)*(byte *)(iVar3 + 1) * 0x14,0x4000);
    bVar1 = *(byte *)(iVar3 + 1);
    goto LAB_080228ce;
  case 1:
    DAT_020023c0 = DAT_020023c0 & 0xedff | 0x100;
    sub_08004070();
    break;
  case 2:
    DAT_020023c6 = 0x8284;
    DAT_020023d0 = 0xa00000;
    DAT_020023c0 = DAT_020023c0 & 0xfeff | 0x1200;
    sub_0800393C(&DAT_08547280 + (uint)*(byte *)(iVar3 + 1) * 0x14,0x4000);
    sub_08003E14(&DAT_0854728c + (uint)*(byte *)(iVar3 + 1) * 0x14,0);
    sub_08004340(0x12,&DAT_085222a0,*(undefined *)(iVar3 + 1),0,0);
    sub_080043C4((DAT_020023c6 & 0x1f00) * 8 + 0x6000800,&DAT_085222a0,*(char *)(iVar3 + 1) + '\x01'
                 ,0,0);
    sub_08004048();
    break;
  case 3:
    DAT_020023c6 = 0x8284;
    DAT_020023d0 = 0x600000;
    DAT_020023c0 = DAT_020023c0 & 0xfeff | 0x1200;
    sub_0800393C(&DAT_08547280 + (uint)*(byte *)(iVar3 + 1) * 0x14,0x4000);
    bVar1 = *(byte *)(iVar3 + 1);
LAB_080228ce:
    sub_08003E14(&DAT_0854728c + (uint)bVar1 * 0x14,0);
    sub_08004340(0x12,&DAT_085222a0,*(undefined *)(iVar3 + 1),0,0);
    sub_08004048();
    break;
  case 4:
    if (DAT_020023d0._2_2_ != 0) {
      DAT_020023d0 = CONCAT22(DAT_020023d0._2_2_ + -1,(undefined2)DAT_020023d0);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
      uVar2 = 1;
      goto LAB_0802298a;
    }
    sub_080E9250();
    break;
  case 5:
    DAT_03002ac0 = (undefined2)*(undefined4 *)(iVar3 + 4);
    break;
  case 6:
    DAT_020023c6 = 0x204;
    DAT_020023d0 = 0;
    DAT_020023c0 = DAT_020023c0 | 0x1200;
    sub_0800393C(&DAT_08547280 + (uint)*(byte *)(iVar3 + 1) * 0x14,0x4000);
    sub_08003E14(&DAT_0854728c + (uint)*(byte *)(iVar3 + 1) * 0x14,0);
    sub_08004340(0x12,&DAT_085222a0,*(undefined *)(iVar3 + 1),0,0);
    sub_08004048();
  }
  uVar2 = 0;
LAB_0802298a:
  return CONCAT44(in_lr,uVar2);
}

