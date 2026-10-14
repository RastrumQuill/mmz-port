// sub_0800E554 at 0x0800E554 (thumb)

undefined8 sub_0800E554(undefined param_1,byte param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = (uint)param_2;
  switch(param_1) {
  case 0:
    iVar3 = sub_08015E08();
    if (iVar3 == 0) goto LAB_0800e74e;
    *(undefined2 *)(iVar3 + 0x1c) = 0;
    *(undefined *)(iVar3 + 0x1e) = 0;
    puVar2 = &DAT_082a7ff4;
    goto LAB_0800e5c6;
  default:
    iVar3 = 0;
    goto LAB_0800e74e;
  case 2:
    iVar3 = sub_08005458(DAT_02022e94);
    if (iVar3 == 0) goto LAB_0800e74e;
    puVar2 = &DAT_082acbf8;
LAB_0800e5c6:
    *(byte *)(iVar3 + 9) = param_2;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(puVar2 + uVar4 * 4);
    goto LAB_0800e74e;
  case 3:
    iVar3 = sub_08005458(DAT_02022e98);
    if (iVar3 == 0) goto LAB_0800e74e;
    *(byte *)(iVar3 + 9) = param_2;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(&DAT_082aeadc + uVar4 * 4);
    *(undefined2 *)(iVar3 + 0x1c) = (&DAT_02022ea0)[uVar4];
    puVar1 = &DAT_02022f30;
    break;
  case 4:
    iVar3 = sub_08005458(DAT_02022f74);
    if (iVar3 == 0) goto LAB_0800e74e;
    *(byte *)(iVar3 + 9) = param_2;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(&DAT_082b17b0)[uVar4];
    *(undefined2 *)(iVar3 + 0x1c) = (&DAT_02022f80)[uVar4];
    puVar1 = &DAT_02022fe0;
    break;
  case 5:
    iVar3 = sub_08005458(DAT_0202300c);
    if (iVar3 == 0) goto LAB_0800e74e;
    *(byte *)(iVar3 + 9) = param_2;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(&DAT_082b31bc)[uVar4];
    *(undefined2 *)(iVar3 + 0x1c) = (&DAT_02023010)[uVar4];
    puVar1 = &DAT_020230c0;
    break;
  case 6:
    iVar3 = sub_08005428(DAT_02023118);
    if (iVar3 == 0) goto LAB_0800e74e;
    *(byte *)(iVar3 + 9) = param_2;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(&DAT_082b5184 + uVar4 * 4);
    *(undefined2 *)(iVar3 + 0x1c) = (&DAT_02023170)[uVar4];
    puVar1 = &DAT_02023120;
    break;
  case 7:
    iVar3 = sub_08005458(DAT_020231fc);
    if (iVar3 == 0) goto LAB_0800e74e;
    *(byte *)(iVar3 + 9) = param_2;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(&DAT_082b6d68)[uVar4];
    *(undefined2 *)(iVar3 + 0x1c) = (&DAT_02023200)[uVar4];
    puVar1 = &DAT_02023208;
    break;
  case 8:
    iVar3 = sub_08005458(DAT_0202320c);
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 9) = param_2;
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(&DAT_082b6e70)[uVar4];
      *(undefined2 *)(iVar3 + 0x1c) = 0xc0;
      *(undefined *)(iVar3 + 0x1e) = 3;
    }
    goto LAB_0800e74e;
  }
  *(undefined1 *)(iVar3 + 0x1e) = puVar1[uVar4];
LAB_0800e74e:
  return CONCAT44(in_lr,iVar3);
}

