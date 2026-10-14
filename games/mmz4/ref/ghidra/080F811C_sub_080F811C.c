// sub_080F811C at 0x080F811C (thumb)

undefined8 sub_080F811C(undefined4 *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  uVar1 = sub_08006F50(*param_1,param_1[1]);
  uVar2 = DAT_02000c80 & 0x7f;
  if (uVar2 != 10) {
    if (uVar2 != 0xd) {
      if (uVar2 != 0xf) goto switchD_080f87a0_caseD_563;
      switch(uVar1) {
      case 0x562:
      case 0x566:
      case 0x592:
      case 0x59a:
        goto switchD_080f87a0_caseD_562;
      default:
        goto switchD_080f87a0_caseD_563;
      case 0x56a:
      case 0x56e:
      case 0x594:
      case 0x598:
        goto switchD_080f87a0_caseD_56a;
      case 0x582:
        goto switchD_080f87a0_caseD_582;
      case 0x583:
      case 0x58c:
      case 0x5a9:
        goto switchD_080f87a0_caseD_583;
      case 0x584:
        goto switchD_080f87a0_caseD_584;
      case 0x588:
        goto switchD_080f87a0_caseD_588;
      case 0x589:
      case 0x5a3:
      case 0x5ac:
        goto switchD_080f87a0_caseD_589;
      case 0x58a:
        goto switchD_080f87a0_caseD_58a;
      case 0x5a2:
        goto switchD_080f87a0_caseD_5a2;
      case 0x5a4:
        goto switchD_080f87a0_caseD_5a4;
      case 0x5a8:
        goto switchD_080f87a0_caseD_5a8;
      case 0x5aa:
        goto switchD_080f87a0_caseD_5aa;
      }
    }
    switch(uVar1) {
    case 0x25:
      uVar3 = 0xc;
      break;
    case 0x26:
      uVar3 = 0xd;
      break;
    case 0xf1:
switchD_080f87a0_caseD_588:
      uVar3 = 5;
      break;
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0x128:
    case 0x129:
    case 0x12a:
    case 0x13e:
      goto switchD_080f87a0_caseD_589;
    case 0xf5:
      goto switchD_080f87a0_caseD_58a;
    case 0xf7:
      goto switchD_080f87a0_caseD_582;
    case 0xf8:
    case 0xf9:
    case 0xfa:
    case 0x122:
    case 0x123:
    case 0x124:
      goto switchD_080f87a0_caseD_583;
    case 0xfb:
      goto switchD_080f87a0_caseD_584;
    case 0x101:
    case 0x10b:
    case 0x111:
    case 0x11b:
      goto switchD_080f87a0_caseD_56a;
    case 0x105:
    case 0x107:
    case 0x115:
    case 0x117:
      goto switchD_080f87a0_caseD_562;
    case 0x121:
      goto switchD_080f87a0_caseD_5a8;
    case 0x125:
      goto switchD_080f87a0_caseD_5aa;
    case 0x127:
    case 0x13d:
      goto switchD_080f87a0_caseD_5a2;
    case 299:
    case 0x13f:
      goto switchD_080f87a0_caseD_5a4;
    }
switchD_080f87a0_caseD_563:
    return CONCAT44(in_lr,uVar3);
  }
  switch(uVar1) {
  case 0x186:
  case 0x1b3:
  case 0x1b5:
  case 0x1bb:
  case 0x1bd:
switchD_080f87a0_caseD_562:
    uVar3 = 0;
  default:
    goto switchD_080f87a0_caseD_563;
  case 0x188:
  case 0x1b1:
  case 0x1b7:
  case 0x1b9:
  case 0x1bf:
  case 0x1d6:
switchD_080f87a0_caseD_56a:
    uVar3 = 3;
    goto switchD_080f87a0_caseD_563;
  case 0x1a1:
  case 0x1a9:
    goto switchD_080f87a0_caseD_588;
  case 0x1a3:
  case 0x1ab:
switchD_080f87a0_caseD_582:
    uVar3 = 10;
    goto switchD_080f87a0_caseD_563;
  case 0x1a4:
  case 0x1ac:
  case 0x1c6:
  case 0x1ce:
  case 0x1d5:
  case 0x1e1:
  case 0x1e3:
  case 0x1e4:
  case 0x1e5:
switchD_080f87a0_caseD_589:
    uVar3 = 6;
    goto switchD_080f87a0_caseD_563;
  case 0x1a5:
  case 0x1ad:
  case 0x1d4:
switchD_080f87a0_caseD_58a:
    uVar3 = 8;
    goto switchD_080f87a0_caseD_563;
  case 0x1a6:
  case 0x1ae:
  case 0x1c4:
  case 0x1cc:
  case 0x1e0:
  case 0x1e2:
switchD_080f87a0_caseD_583:
    uVar3 = 9;
    goto switchD_080f87a0_caseD_563;
  case 0x1a7:
  case 0x1af:
switchD_080f87a0_caseD_584:
    uVar3 = 4;
    goto switchD_080f87a0_caseD_563;
  case 0x1c1:
  case 0x1c9:
switchD_080f87a0_caseD_5a8:
    uVar3 = 0xb;
    goto switchD_080f87a0_caseD_563;
  case 0x1c3:
  case 0x1cb:
  case 0x1e8:
switchD_080f87a0_caseD_5a2:
    uVar3 = 1;
    goto switchD_080f87a0_caseD_563;
  case 0x1c5:
  case 0x1cd:
switchD_080f87a0_caseD_5aa:
    uVar3 = 2;
    goto switchD_080f87a0_caseD_563;
  case 0x1c7:
  case 0x1cf:
  case 0x1e6:
switchD_080f87a0_caseD_5a4:
    uVar3 = 7;
    goto switchD_080f87a0_caseD_563;
  }
}

