// sub_0801BE8C at 0x0801BE8C (thumb)

undefined8 sub_0801BE8C(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xc);
  switch(*(undefined2 *)(iVar5 + 2)) {
  case 0:
    DAT_02000f96 = 0x284;
    DAT_02000fa0 = 0;
    DAT_02000f90 = DAT_02000f90 | 0x1200;
    sub_08002638(&DAT_08390e00 + (uint)*(byte *)(iVar5 + 1) * 0x14,0x4000);
    sub_08002AEC(&DAT_08390e0c + (uint)*(byte *)(iVar5 + 1) * 0x14,0);
    bVar1 = *(byte *)(iVar5 + 1);
    goto LAB_0801c05a;
  case 1:
    DAT_02000f90 = DAT_02000f90 & 0xedff | 0x100;
    sub_08002D34();
    break;
  case 2:
    DAT_02000f96 = 0x8284;
    DAT_02000fa0 = 0xa00000;
    DAT_02000f90 = DAT_02000f90 & 0xfeff | 0x1200;
    sub_08002638(&DAT_08390e00 + (uint)*(byte *)(iVar5 + 1) * 0x14,0x4000);
    sub_08002AEC(&DAT_08390e0c + (uint)*(byte *)(iVar5 + 1) * 0x14,0);
    sub_080EEF68((int)(&DAT_0836d100 + *(byte *)(iVar5 + 1)) +
                 (&DAT_0836d100)[*(byte *)(iVar5 + 1)] + 8,(DAT_02000f96 & 0x1f00) * 8 + 0x6000000,
                 0x200);
    puVar2 = &UNK_0836d108 + (&DAT_0836d104)[*(byte *)(iVar5 + 1)] + (*(byte *)(iVar5 + 1) + 1) * 4;
    puVar4 = &DAT_06000800 + (DAT_02000f96 & 0x1f00) * 8;
    goto LAB_0801c074;
  case 3:
    DAT_02000f96 = 0x8284;
    DAT_02000fa0 = 0x600000;
    DAT_02000f90 = DAT_02000f90 & 0xfeff | 0x1200;
    sub_08002638(&DAT_08390e00 + (uint)*(byte *)(iVar5 + 1) * 0x14,0x4000);
    sub_08002AEC(&DAT_08390e0c + (uint)*(byte *)(iVar5 + 1) * 0x14,0);
    bVar1 = *(byte *)(iVar5 + 1);
LAB_0801c05a:
    puVar2 = (undefined *)((int)(&DAT_0836d100 + bVar1) + (&DAT_0836d100)[bVar1] + 8);
    puVar4 = (undefined *)((DAT_02000f96 & 0x1f00) * 8 + 0x6000000);
LAB_0801c074:
    sub_080EEF68(puVar2,puVar4,0x200);
    sub_08002D0C();
    break;
  case 4:
    if (DAT_02000fa0._2_2_ != 0) {
      DAT_02000fa0 = CONCAT22(DAT_02000fa0._2_2_ + -1,(undefined2)DAT_02000fa0);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
      uVar3 = 1;
      goto LAB_0801c138;
    }
    sub_080DE1BC();
    break;
  case 5:
    DAT_03002ac0 = (undefined2)*(undefined4 *)(iVar5 + 4);
    break;
  case 6:
    DAT_02000f96 = 0x204;
    DAT_02000fa0 = 0;
    DAT_02000f90 = DAT_02000f90 | 0x1200;
    sub_08002638(&DAT_08390e78,0x4000);
    sub_08002AEC(&DAT_08390e84,0);
    sub_08002638(&DAT_08390e8c,(DAT_02000f96 & 0xc) * 0x1000);
    sub_08002AEC(&DAT_08390e98,0);
    sub_080EEF68(&DAT_08385290,(DAT_02000f96 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_08002D0C();
  }
  uVar3 = 0;
LAB_0801c138:
  return CONCAT44(in_lr,uVar3);
}

